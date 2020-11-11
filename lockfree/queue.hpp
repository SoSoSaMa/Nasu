#pragma once

#include <iostream>
#include <atomic>

namespace nasu {
	namespace lockfree {

		template <typename Element>
		class queue {
		public:
			queue(){

			}

			~queue() {
				delete[] ;
			}

			void initialize() {
				_tail.store(100, std::memory_order_relaxed);
				_tail.store(0, std::memory_order_relaxed);
				_front.store(0, std::memory_order_release);
			}

			// perfect forwarding later
			void push(const Element& element) {
				while (true) {
					uint64_t current_front = _front.load(std::memory_order_acquire);
					uint64_t current_tail = _tail.load(std::memory_order_acquire);
				
					uint64_t new_tail = _tail.load(std::memory_order_acquire);
					if (current_tail == new_tail) {
						// size = 0   
						if (current_front == current_tail) { 

						}

						return true;
					}
				}
			}

			Element pop() {

			}

			// 
			uint64_t size() {
				return static_cast<int64_t>(_front - _tail);
			}

		private:
			std::atomic_uint64_t _tail;
			std::atomic_uint64_t _front;
			std::atomic_uint64_t _capacity;
			Element[100] _internal_element;
		};
	}
}
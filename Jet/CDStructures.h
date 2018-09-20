//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*> *_field1;
};

struct jet_context {
    CDUnknownFunctionPointerType *_field1;
    struct jet_render_mode *_field2;
    struct jet_framebuffer *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct shared_ptr<jet_fence> _field8;
    struct unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *>> _field9;
    id _field10;
};

struct jet_fence;

struct jet_framebuffer {
    CDUnknownFunctionPointerType *_field1;
    struct {
        struct jet_texture *_field1;
        unsigned int _field2;
        unsigned int _field3;
    } _field2[4];
    struct {
        struct jet_texture *_field1;
        float _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field3;
    struct {
        struct jet_texture *_field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field4;
};

struct jet_render_mode;

struct jet_texture {
    CDUnknownFunctionPointerType *_field1;
};

struct shared_ptr<jet_fence> {
    struct jet_fence *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *>> {
    struct __hash_table<jet_buffer *, std::__1::hash<jet_buffer *>, std::__1::equal_to<jet_buffer *>, std::__1::allocator<jet_buffer *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*>, std::__1::allocator<std::__1::__hash_node<jet_buffer *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<jet_buffer *, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<jet_buffer *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<jet_buffer *>> {
            float _field1;
        } _field4;
    } _field1;
};

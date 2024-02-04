/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */

/* THIS FILE IS AUTOGENERATED BY BPFTOOL! */
#ifndef __SIGSNOOP_BPF_SKEL_H__
#define __SIGSNOOP_BPF_SKEL_H__

#include <stdlib.h>

struct bpf_object_skeleton;
struct bpf_object;
struct bpf_map;
struct bpf_program;
struct bpf_object_open_opts;
struct bpf_link;

struct sigsnoop_bpf {
    struct bpf_object_skeleton* skeleton;
    struct bpf_object* obj;
    struct {
        struct bpf_map* events;
        struct bpf_map* values;
        struct bpf_map* rodata;
    } maps;
    struct {
        struct bpf_program* kill_entry;
        struct bpf_program* kill_exit;
        struct bpf_program* tkill_entry;
        struct bpf_program* tkill_exit;
        struct bpf_program* tgkill_entry;
        struct bpf_program* tgkill_exit;
        struct bpf_program* sig_trace;
    } progs;
    struct {
        struct bpf_link* kill_entry;
        struct bpf_link* kill_exit;
        struct bpf_link* tkill_entry;
        struct bpf_link* tkill_exit;
        struct bpf_link* tgkill_entry;
        struct bpf_link* tgkill_exit;
        struct bpf_link* sig_trace;
    } links;
    struct sigsnoop_bpf__rodata {
        int filtered_pid;
        int target_signal;
        bool failed_only;
    } * rodata;

#ifdef __cplusplus
    static inline struct sigsnoop_bpf* open(
        const struct bpf_object_open_opts* opts = nullptr);
    static inline struct sigsnoop_bpf* open_and_load();
    static inline int load(struct sigsnoop_bpf* skel);
    static inline int attach(struct sigsnoop_bpf* skel);
    static inline void detach(struct sigsnoop_bpf* skel);
    static inline void destroy(struct sigsnoop_bpf* skel);
    static inline const void* elf_bytes(size_t* sz);
#endif /* __cplusplus */
};

char* program_data =
    "{\"bpf_object\":"
    "\"eJztmn1sFMcVwGfPHzkbDMaAcUJDF0KcMzj2YRtiwtdBgIBEqQUhIR9ofdiHcTj7LvdB7Hw0"
    "lpK0VkRbV0olt0KN20aV1UaVVVWCfki4aqtQNX+4VdtQiT+uUtJSlVZWFalOREvfm3mzO/"
    "duzzYqKFLDSXuzvzdv3nsz83Z3bude2nNgb8CyhP5Y4l/"
    "CI+"
    "8zvtE7j9D3StAcXFEnabC2WpbnqHHXXTPXVfkBldNUXqXymizrmLNojSqXB8oUL1F8IaXKnoAQ"
    "NpTPUnlstfL/KhyL0G7lZWn3WaHqi9sP5Nk/Zi1WcT93RcX39HuqrMzJ8sI3ld4dYG/"
    "6+vXr56B5NfnF8sK3qB7kl6H+wreJS4TIAfM4zpUKN26M5BzJv0rlhVpVDvZUs/"
    "6pcTP9XfOxj/"
    "ooWi5WSOb1zxQZ17epPFei5H33qIZHrAo1PsmFql1U1dcF8u3WQTsI57rmC9TPc2XKLsZ15zzj"
    "L/EZl9v5djvfzM+tzzdblbVq3m/n2+18u5X5psdF59nzlGfPU35Fe4JSHu1VcUZPrp21/"
    "8stFeCFr9A4WJRfVC631vi2v+E8rbnT7RfO443npzrp+"
    "jpdPzpPX7vBPH2T6ktVXs53Hvn88Xm5WZ/d2Wjc3nV4d/PDHQeQ3/"
    "ibJeqo7kqZOpygqx7AHKEhlDNpuyjTR15bpXSU5etppdI66pNuuIrOI3DcR+"
    "dDcLSo6kVlhi668MLJ92nqVBbRESFPBzN2szoPVsHXDp94UQ/vVAdUf0pRfgiOKqp8lM5R/"
    "iT5icDh0HknHF1wLKE+"
    "nSQfGGuQjV01xVhNwlLyh2N1B8n64KggH4NwLCC7LwqV55NwvKxUF9WwMVkOX6+"
    "RXWyPqUmXtxgnPyj/Hhwrye4EHJ+SrVUOYtsg6a6gtj+Ho47i/hWd19E4BWhs3qV+B0jvz/"
    "njID4gDqoYrA/zWZjjdJeKQ5QzuR4//"
    "QHbVegPr81lOFaWlC282xgTG77Wl6h+1c0yJg6dDxljMunj59NQ7i5RflYXieNaqaq/"
    "p0j7xjJVf2+R9l+m+vuKtA+Wq/oGo5+N8NVfLnOnNMz6aebtl8q9vH2dzoeEl8NjQs3r/"
    "XDY4ORrpBOB8zd0W8sboyE4/"
    "46aqGATfL1F5wGf2NdD+ROKvdmLvbLFO69Av9PqYli0QeTld6Xxk7ACbf6b9NqYXruhh9f/"
    "AnVDCT4IX9XqXOdlaa3iRQ/k28jLN7z+15De1ny9wA7Db8Twi/"
    "eUddRmO7XZrW4IcmG0kxRRZX9QjquU65zHXF1K5zYcnw3KoKROK8kxtk3G+RY6R1+"
    "PGb62kVze03r7M8Jxdh46tPNx5/D+J/"
    "Y4jzzescdxRGYwGROnYoNOuve5mDgdjWdj6jR2OtafSUObbGuLyPane3v6Y902mpE1ItnbLTL4"
    "BTUiFcuIrkRfn+"
    "g6GU2JvuiAAyqp3lgaTSur6jstMqloV8yRNpxU9FknPZhG5VhKoFWwF031oNvuaCaqlcHWoDgR"
    "j0JFMhWL9SUzTlciC+puXOmTiZSBMox4or/"
    "HE0nqygyIU73xOJmU5pMJ6FQzhNEVjcfTzW48DiqK8IMtD24QzelUVzMYSvcnEsmm48kTTRmIo"
    "qlLVEBbGyrsbXYIThvAwf3bsQdPbji2RTYOiwoYJSdj42ChmiRDMQyKFelMKtuVseWw0Pc2+/"
    "kXoab3hB3KgGIs42BP4LFeXy89rt5m58kbyFGPdAMxOljXlU2lcKh1VagBbGZUJHJuG3TNFtke"
    "5K6V7dvt1hYK4URvHMYk1o2GMAIsIAJTDAHIyJvUeMD3Fi2hvmPhylxnIOHRYi6FlBqeNtqYko"
    "kThqihgZr1RZNONgnZAnkSj/WF6lWeNdr10Ev4lk0a7V0de52dBx/HVpCs2VS/"
    "nUwljlNuhTAwdNID9b4JOtCbocTBs6J5A5UqbTAtXP0QzW4xy/"
    "Y6yIYGzBYeHDaGukZbpgvUYfwwbZva7PnOtZxku9iMy2CSZAOHMp5InMomfYaygRJhtWrSQGkR"
    "7Y3D7Cf644OYFRChvX2bHdapkJRBg3n4pvlKxlInaAwS2UwySx1U85RWE7XXeejIoUN7Dj7iPN"
    "RxpFFdD0k3CdZRBGYGdEPAvhmAEzrvK15qav05JzrjznTmRqc60zP/"
    "mHrc+"
    "1DLLLeblmNb5rrR4B1JO567cz1e73puuHu8Wt6gIEf7Yym4UEUslepPwAOjOyZ6UolsEp4f6Wx"
    "cPlMcfEydiqX6Y3GVx/h8caTBvIClxWZumIZH6RcNNr+Re/"
    "VtMIdXDpu6haFQZbEUyuDx3r6RDbisVfezIpfGNuPSaLoJF4a+"
    "uZl3R7wsXhTmfVnkPSbE8UQiLpxd+G2EKA7sf2jPwcN7YPRj2f5EX2/"
    "U6c729Q1SRMlMSjQdT6dFE1xt8J1KyOdzvLcr1p+Oqd+XNq03MnRshUXpBBzXaL1Ta+X/"
    "NjxY4jG+HQiWeYxvGx4wuB6Oswbjz71l5R6vg+OXBuNauJp86t8zO+D8KBxLQpaMB/"
    "kFOGrXqt/GyG/g4imp1szIP4KjfAjaGbxsSK2jNa8aUr//"
    "tP2FYH+ItR8mfh8XxmeEGCHGRXL560KMEt8LvGRErceRt2I9VJ43eOmo+o2i+W7gi0x/"
    "ivgE8MK3hLhEPABcBT+AcsRnsB5+NFwh/gbwCljkzxgcAK628u2FiH+P9T8UYh/"
    "xApjTQNiSc1ttjHsSV9YRb9zHgVdBo2riXwMvfUe48/"
    "AhcHBKzfMOY+EdJl4BC98Fl8Ev8R7gcuhUB/Fh5KvePCHXXPXmCf3fCf6HWb2eh2eAF8148/"
    "AqcOCaN076M038LtYHoX+WZz8A9jGnC/"
    "Kvm+Vf503Ov+5PeP7FLXnvMPPvCXzZ9ALLv1c+5vx75RbnH9g/y/LvbeAlY944vA9ce/bm5R/"
    "aXzj2Cc+/cUs+m8z8a8cf+OdZ/k1+zPk3eYvzD+zjM3mlMQ5/"
    "wXGY8vot8+2SWjsg18O7nSXvWW6/tyDnLLffjwIvu2yJduJ+4PIPLLffyDXAA2b+wVuWETN/"
    "gUfN/"
    "AUeM3gl8HnWftLM34UBN99kvlYH3HyT+"
    "bcs4I6TzFfgaTNfgWeYvqBxOwPxL2wMuOMo8y0UcPNP5u/"
    "agNzvcPPXDsh3dm7+hgMibHAAeB+z36HrgQNtATFM/A9gC4LSayf9Pg/"
    "fMW+meQ8SnybW6ziU4zy+SXte+OybT3u9zuPtz7L2PyvLb6/"
    "t6XUgb4+5V0IyfE+"
    "6hl62h4i1Xpj4kH4ZP8enRJQUyL4YUDXDTL6e5PusfPlTJJ8SfvbLCmRrpX6ZzAvz8wzJR5n+"
    "EZLnhJ/9wo5+XurfURD/3STn8R8kuX/8FQWyWqlfURD/"
    "0yTn8T9M8pzws7+gQPaS1F9QEP9ikvP4IyT3j7+qQKZebFcVxN9Fch7/ZpLnhJ/9xQWyAam/"
    "WN63zM9HlpIPM78tpD/J9C2SC6aPHmuMvD1K9UkL3/"
    "8vcfdXdPkLkgsmPy5QXuPuJdpU7pX2vbzV+7F3CWVH7+3psDrIjqtv1NcY+"
    "anj3CzlFQX2q6R8QYH+bimvKtD/sYVyb/"
    "xHSf5P2d+lrly37JVxLnPluh8RI17cmxkz2BZqfaB5tVD3GJM7DMb9onGD8bfvNNOP/J/"
    "7a2f6A8z/FPN/1Mq3d4ZSD/"
    "MU95veNBjrJwxGfxeJ9fPhdwajv5zBGM+"
    "M0R7fNTQKjzGGrQaj6gGDMWufMhhzK24wXmUvGIzPtjMG4/"
    "7kGPM3wXiS8RTjHONpxvrC1FzN2GYcZhxh3MG4k3GS8RDjEcZjjCcYTzKeYpxjPM1YLzQ01xmM"
    "8xli3M54H+OjjE8yHmA8zHiU8Tjj84wvMr7E+"
    "ArjGcbBkny2Dcb8DTOOMO5g3Mk4yXiI8QjjMcYTjCcZTzHOMZ5mrB9omqsZ24zDjCOMOxh3Mk4"
    "yHmI8ajDeH8YZn2d8kfElxlcYzzAOluVzHeMQ43bG+"
    "xgfZXyS8QDjYcZjBuP9cILxJOMpxjnG04z1BrvmasY24zDjCOMOxp2Mk4yHGI8wHmM8wXiS8RT"
    "jHONpxnpJpbnOYHzehBi3M97H+Cjjk4wHGA8zHmU8zvg844uMLzG+wniGcTCYz7bB+"
    "HwNM44w7mDcyTjJeIjxCOMxxhOMJxlPMc4xnmasl8qaqxnbjMOMI4w7GHcyTjIeYjzCeIzxBON"
    "JxpcNxufzVcallR7jpf8pg1G1kfFug/H+85TBeH3EGb9iMObP2cr8+N5i/"
    "FPGocbm8IaW1nUN9ze1rc/fkTa3gs0NuaZMbCADO22xeNOuR/Y2IZg708ZGLv1Vx9ifo//"
    "azLKXB2bnsbk9q5qxZT63uZ752uuZn8F5mlMb+nn7n03x+Ok+J9rdncJ/LnET/vvKep/"
    "T24vO22Btgp3mTPQ4lIN9sqTtUT157ubqgV27NjkPqGITFhudjVi0qaJVFS2q2KCKsCo2OW2qQ"
    "Ztq0KYatKkGbapBm2pAmq1KpVXVtSorLap5i2rXohoYf8X73z6/"
    "sYTP2zG4xujPa68H8uUW06snWTmTR4T/p5TxZ6zZ2x9lDoNMb7/l/Q/X/EzVq1L/zsX3GiVGe/"
    "2u/74i/vV7hro5/N9TxL+gP4VGDP9lotD/94W//wka97n6/13h7z9C/s3+3+Hj/wtF/"
    "Adpoubq/8tF/Cd9+l/h4/8/RfzbtB6cq/8fFfE/4dP/BT7+/1DE/wAJ5ur/b4v4z/"
    "n0v0oU+h8pkn8jtB4ancP/mSL5Z4cK/S/28f8n8s8ucxGi5zV/M8yvX3xPgu35PaSdGraL2eP/"
    "geXfXq9P+Jtdfv95jGzy9no9E5zD/9+tQptme2dRvpz3/69Fxr+Txj9JjOMv17XEevwxP/"
    "3852gT+J3K2f3jey3f+x/5D1d6/lf4+P8c3v8PXE/A6VCeAbr/zzX+f7QKcwc/"
    "E2tUaZd67VYZ/vX74/"
    "8C55QFKg==\",\"bpf_object_size\":15464,\"meta\":{\"bpf_skel\":{\"data_"
    "sections\":[{\"name\":\".rodata\",\"variables\":[{\"name\":\"filtered_"
    "pid\",\"type\":\"pid_t\"},{\"name\":\"target_signal\",\"type\":\"int\"},{"
    "\"name\":\"failed_only\",\"type\":\"bool\"}]},{\"name\":\".bss\","
    "\"variables\":[{\"name\":\"__eunomia_dummy_event_ptr\",\"type\":\"struct "
    "event "
    "*\"}]}],\"maps\":[{\"ident\":\"events\",\"name\":\"events\"},{\"ident\":"
    "\"values\",\"name\":\"values\"},{\"ident\":\"rodata\",\"mmaped\":true,"
    "\"name\":\"sigsnoop.rodata\"},{\"ident\":\"bss\",\"mmaped\":true,\"name\":"
    "\"sigsnoop.bss\"}],\"obj_name\":\"sigsnoop_bpf\",\"progs\":[{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_enter_kill\",\"link\":true,\"name\":\"kill_entry\"},{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_exit_kill\",\"link\":true,\"name\":\"kill_exit\"},{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_enter_tkill\",\"link\":true,\"name\":\"tkill_entry\"},{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_exit_tkill\",\"link\":true,\"name\":\"tkill_exit\"},{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_enter_tgkill\",\"link\":true,\"name\":\"tgkill_entry\"},{\"attach\":"
    "\"tracepoint/syscalls/"
    "sys_exit_tgkill\",\"link\":true,\"name\":\"tgkill_exit\"},{\"attach\":"
    "\"tracepoint/signal/"
    "signal_generate\",\"link\":true,\"name\":\"sig_trace\"}]},\"eunomia_"
    "version\":\"0.3.0\",\"export_types\":[{\"members\":[{\"name\":\"pid\","
    "\"type\":\"unsigned int\"},{\"name\":\"tpid\",\"type\":\"unsigned "
    "int\"},{\"name\":\"sig\",\"type\":\"int\"},{\"name\":\"ret\",\"type\":"
    "\"int\"},{\"name\":\"comm\",\"type\":\"char[16]\"}],\"name\":\"event\","
    "\"size\":32,\"type_id\":15}]}}";

static void sigsnoop_bpf__destroy(struct sigsnoop_bpf* obj) {}

static inline int sigsnoop_bpf__create_skeleton(struct sigsnoop_bpf* obj);

static inline struct sigsnoop_bpf* sigsnoop_bpf__open_opts(
    const struct bpf_object_open_opts* opts) {
    struct sigsnoop_bpf* obj;
    int err;

    obj = (struct sigsnoop_bpf*)calloc(1, sizeof(*obj));
    if (!obj) {
        errno = ENOMEM;
        return NULL;
    }
    return obj;
}

static inline int sigsnoop_bpf__open(void) {
    int res = create_bpf(program_data, strlen(program_data));
    if (res < 0) {
        printf("create_bpf failed %d", res);
        return -1;
    }
    return res;
}

static inline int sigsnoop_bpf__load(int obj_id) {
    int res = run_bpf(obj_id);
    if (res < 0) {
        printf("run_bpf failed %d\n", res);
        return -1;
    }
    return 0;
}

static inline struct sigsnoop_bpf* sigsnoop_bpf__open_and_load(void) {
    return NULL;
}

static inline int sigsnoop_bpf__attach(struct sigsnoop_bpf* obj) {
    return 0;
}

static inline void sigsnoop_bpf__detach(struct sigsnoop_bpf* obj) {}

static inline const void* sigsnoop_bpf__elf_bytes(size_t* sz);

static inline int sigsnoop_bpf__create_skeleton(struct sigsnoop_bpf* obj) {
    return 0;
}

#ifdef __cplusplus
struct sigsnoop_bpf* sigsnoop_bpf::open(
    const struct bpf_object_open_opts* opts) {
    return sigsnoop_bpf__open_opts(opts);
}
struct sigsnoop_bpf* sigsnoop_bpf::open_and_load() {
    return sigsnoop_bpf__open_and_load();
}
int sigsnoop_bpf::load(struct sigsnoop_bpf* skel) {
    return sigsnoop_bpf__load(skel);
}
int sigsnoop_bpf::attach(struct sigsnoop_bpf* skel) {
    return sigsnoop_bpf__attach(skel);
}
void sigsnoop_bpf::detach(struct sigsnoop_bpf* skel) {
    sigsnoop_bpf__detach(skel);
}
void sigsnoop_bpf::destroy(struct sigsnoop_bpf* skel) {
    sigsnoop_bpf__destroy(skel);
}
const void* sigsnoop_bpf::elf_bytes(size_t* sz) {
    return sigsnoop_bpf__elf_bytes(sz);
}
#endif /* __cplusplus */

__attribute__((unused)) static void sigsnoop_bpf__assert(
    struct sigsnoop_bpf* s __attribute__((unused))) {
#ifdef __cplusplus
#define _Static_assert static_assert
#endif
    _Static_assert(sizeof(s->rodata->filtered_pid) == 4,
                   "unexpected size of 'filtered_pid'");
    _Static_assert(sizeof(s->rodata->target_signal) == 4,
                   "unexpected size of 'target_signal'");
    _Static_assert(sizeof(s->rodata->failed_only) == 1,
                   "unexpected size of 'failed_only'");
#ifdef __cplusplus
#undef _Static_assert
#endif
}

struct perf_buffer;
void perf_buffer__free(struct perf_buffer* pb) {}
int perf_buffer__poll(struct perf_buffer* pb, int obj_id) {
    int res = wait_and_poll_bpf(obj_id);
    if (res < 0) {
        printf("wait_and_poll_bpf failed %d\n", res);
        return -1;
    }
    return 0;
}
int bpf_program__set_autoload(struct bpf_program* prog, bool autoload) {
    return 0;
}
char* strerror(int errnum) {
    return "error";
}
int bpf_map__fd(const struct bpf_map* map) {
    return 0;
}
typedef void (*perf_buffer_sample_fn)(void* ctx,
                                      int cpu,
                                      void* data,
                                      unsigned int size);
typedef void (*perf_buffer_lost_fn)(void* ctx, int cpu, unsigned long long cnt);
struct perf_buffer;

perf_buffer_sample_fn global_cb;
struct perf_buffer_opts;

struct perf_buffer* perf_buffer__new(int map_fd,
                                     size_t page_cnt,
                                     perf_buffer_sample_fn sample_cb,
                                     perf_buffer_lost_fn lost_cb,
                                     void* ctx,
                                     const struct perf_buffer_opts* opts) {
    global_cb = sample_cb;
    return (void*)1;
}

int process_event(int ctx, char* e, int str_len) {
    struct event eve = {0};
    global_cb((void*)ctx, 0, &eve, str_len);
    return 0;
}

extern const char argp_program_doc[];

void argp_state_help(const struct argp_state* __state, int flag) {
    printf("%s", argp_program_doc);
    exit(0);
}

#endif /* __SIGSNOOP_BPF_SKEL_H__ */

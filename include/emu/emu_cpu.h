#ifndef HAVE_EMU_CPU_H
#define HAVE_EMU_CPU_H

#include <inttypes.h>
#include <emu/emu.h>

struct emu_cpu;

const char *emu_regm[] = {
	"eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi"
};

enum emu_reg {
	eax = 0, ecx, edx, ebx, esp, ebp, esi, edi
};

struct cpu *emu_cpu_new(struct emu *e);

void emu_cpu_set_register(struct emu_cpu *c, enum emu_reg r, uint32_t val);
uint32_t emu_cpu_get_register(struct emu_cpu *c, enum emu_reg r, uint32_t val);
void emu_cpu_set_eip(struct emu_cpu *c, uint32_t eip);
uint32_t emu_cpu_get_eip(struct emu_cpu *c);

void emu_cpu_step(struct emu_cpu *c);
void emu_cpu_run(struct emu_cpu *c);

void emu_cpu_free(struct emu_cpu *c);

#endif /* HAVEEMU_CPU_H */

// sub_0808AC64 at 0x0808AC64 (thumb)

undefined4 sub_0808AC64(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x4c) =
       *(int *)(iVar2 + 0x4c) + (*(byte *)(param_1 + 10) >> 4 & 1) * 0x4800 + -0x2400;
  *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + -0x1000;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((((cVar1 == '\0') || (1 < *(byte *)(iVar2 + 0xc))) || (*(char *)(iVar2 + 0xd) != '\x04')) ||
     (*(int *)(iVar2 + 0xb8) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


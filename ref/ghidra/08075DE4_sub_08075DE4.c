// sub_08075DE4 at 0x08075DE4 (thumb)

undefined4 sub_08075DE4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x240) == 0) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    cVar1 = sub_080079CC();
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((uVar3 & 0xf0) == 0x80) {
      return in_lr;
    }
    sub_0808827C(2,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0808827C(2,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}


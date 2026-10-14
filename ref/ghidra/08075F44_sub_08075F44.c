// sub_08075F44 at 0x08075F44 (thumb)

undefined4 sub_08075F44(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(char *)(param_1 + 0x13) != '\0')) &&
     ((*(ushort *)(param_1 + 0x90) & 0x204) == 0)) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(int *)(param_1 + 0x54) < 1) {
      cVar2 = *(char *)(param_1 + 0x12) + -8;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x12) + '\b';
    }
    *(char *)(param_1 + 0x12) = cVar2;
    *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x12);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    bVar1 = *(byte *)(param_1 + 0x13);
    bVar5 = bVar1 - 1;
    *(byte *)(param_1 + 0x13) = bVar5;
    if (bVar1 < 0x20) {
      if ((bVar5 & 3) < 2) {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
        *(undefined *)(param_1 + 0x1e) = 0xd;
      }
      else {
        cVar2 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
        *(char *)(param_1 + 0x1e) = cVar2;
      }
    }
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar2 == '\0') {
      return in_lr;
    }
    uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((uVar3 & 0xf0) == 0x80) {
      return in_lr;
    }
    iVar6 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x50) - iVar6 < 0x701) {
      uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      *(int *)(param_1 + 0x58) = -(*(int *)(param_1 + 0x58) >> 1);
      return in_lr;
    }
  }
  sub_0808827C(2,param_1 + 0x4c);
  sub_08001EAC(0xe1);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}


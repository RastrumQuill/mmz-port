// sub_08089108 at 0x08089108 (thumb)

undefined4 sub_08089108(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = (uint)*(byte *)(param_1 + 0x13) + (uint)(*(byte *)(param_1 + 0x12) >> 5);
  *(char *)(param_1 + 0x13) = (char)iVar3;
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  iVar3 = iVar3 + uVar6;
  iVar5 = ((int)*(short *)((int)&DAT_080c8ea4 + ((uint)(iVar3 * 0x1000000) >> 0x17)) -
          (int)(short)(&DAT_080c8e24)[uVar6 + 0x40]) * 0x80000;
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) +
       ((int)(short)(&DAT_080c8e24)[iVar3] - (int)(short)(&DAT_080c8e24)[uVar6]) * -8;
  if (*(char *)(param_1 + 0x74) == '\x04') {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)(short)((uint)iVar5 >> 0x10);
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x1f) = cVar1;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar5 >> 0x10);
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x1f) = -1 - cVar1;
  }
  bVar2 = *(char *)(param_1 + 0x13) + cVar1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (0x40 < bVar2) {
    sub_0808827C(1,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}


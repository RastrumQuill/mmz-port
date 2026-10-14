// sub_0804F820 at 0x0804F820 (thumb)

undefined4 sub_0804F820(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(param_1 + 0xbc);
    uVar5 = (uint)bVar1;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar5 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&UNK_082af30c + uVar5 * 4);
    sub_080033F0(param_1 + 0x6c,6);
    if (iVar6 != 0) {
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
  iVar4 = *(int *)(param_1 + 0x54) * 200;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  bVar2 = *(char *)(param_1 + 0x13) - 10;
  *(byte *)(param_1 + 0x13) = bVar2;
  if (bVar2 < 0x60) {
    *(undefined *)(param_1 + 0x13) = 0x60;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080033F0(param_1 + 0x6c,0);
    if (iVar6 != 0) {
      cVar3 = (&DAT_02022f30)[*(byte *)(iVar6 + 9)];
      *(byte *)(iVar6 + 0x41) = *(byte *)(iVar6 + 0x41) & 0xf | cVar3 << 4;
      *(char *)(iVar6 + 0x1e) = cVar3;
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) | 1;
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}


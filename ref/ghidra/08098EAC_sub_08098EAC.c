// sub_08098EAC at 0x08098EAC (thumb)

undefined4 sub_08098EAC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar3 = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar4 + 0xc9) == '\x04') {
      cVar1 = (&DAT_020230c0)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    if ((*(char *)(iVar4 + 0xf) != '\0') &&
       (bVar2 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar2 + 1,
       *(short *)(param_1 + 0x7e) < (short)(ushort)bVar2)) {
      sub_080033F0(param_1 + 0x6c,*(byte *)(param_1 + 0x10) | 1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


// sub_080545E0 at 0x080545E0 (thumb)

undefined4 sub_080545E0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_14 [2];
  
  local_14[0] = 0x83;
  local_14[1] = 0x84;
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08048A54(param_1);
    sub_080033F0(param_1 + 0x6c,1);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    cVar2 = '\x01' - *(char *)(param_1 + 0xc4);
    *(char *)(param_1 + 0x44) = cVar2;
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0808C0B8(param_1,*(undefined *)(param_1 + 0xc4));
    (&DAT_02022ad4)[(int)local_14[*(byte *)(param_1 + 0x10)] >> 3] =
         (byte)(1 << (local_14[*(byte *)(param_1 + 0x10)] & 7)) |
         (&DAT_02022ad4)[(int)local_14[*(byte *)(param_1 + 0x10)] >> 3];
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x10;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
  }
  *(char *)(param_1 + 0x13) = cVar2;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    sub_08001EAC(2);
    sub_0808827C(3,param_1 + 0x4c);
    sub_08015698(0,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


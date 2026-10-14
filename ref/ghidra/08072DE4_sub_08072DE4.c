// sub_08072DE4 at 0x08072DE4 (thumb)

undefined4 sub_08072DE4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,4);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    DAT_02022ae1 = DAT_02022ae1 & 0xf7 | 0x10;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (((*(ushort *)(param_1 + 0x90) & 8) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf) == 0)) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x03';
  }
  if (2 < *(byte *)(param_1 + 0x13)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(iVar2 + 0xd) = 2;
    *(undefined *)(iVar2 + 0xe) = 1;
    *(undefined *)(iVar2 + 0xf) = 0;
  }
  return in_lr;
}


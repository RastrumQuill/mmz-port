// sub_080CED04 at 0x080CED04 (thumb)

undefined4 sub_080CED04(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836cdd4 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(int *)(param_1 + 0x5c) = (int)*(short *)(&DAT_0836cdf0 + (uint)*(byte *)(param_1 + 0x10) * 4);
    *(int *)(param_1 + 0x60) = (int)*(short *)(&DAT_0836cdf2 + (uint)*(byte *)(param_1 + 0x10) * 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(short *)(param_1 + 0x12) == 1) {
    sub_080177CC(param_1,*(undefined2 *)(&DAT_0836cdd4 + (uint)*(byte *)(param_1 + 0x10) * 2),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  if (*(short *)(param_1 + 0x12) == 0x100) {
    sub_080177CC(param_1,*(undefined2 *)(&DAT_0836cddc + (uint)*(byte *)(param_1 + 0x10) * 2),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  iVar2 = (uint)*(byte *)(param_1 + 0x10) * 8;
  sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + (int)*(short *)(&DAT_0836ce00 + iVar2),
                       *(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_0836ce02 + iVar2));
  if ((sVar1 != 0) ||
     (iVar2 = (uint)*(byte *)(param_1 + 0x10) * 8,
     sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + (int)*(short *)(&DAT_0836ce04 + iVar2),
                          *(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_0836ce06 + iVar2)),
     sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


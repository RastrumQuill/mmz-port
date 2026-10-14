// sub_08047230 at 0x08047230 (thumb)

undefined4 sub_08047230(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa50b);
    sub_08006E08(param_1 + 0x74,&DAT_0833ab3c);
    uVar2 = sub_08079798(param_1,0,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0833ac2c + *(char *)(param_1 + 0x71) * 4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_0833ac2c + *(char *)(param_1 + 0x71) * 4);
      }
      *(int *)(iVar4 + 0x54) = iVar3;
      *(int *)(*(int *)(param_1 + 0xd8) + 0x58) =
           *(int *)(param_1 + 0x58) + *(int *)(&DAT_0833ac40 + *(char *)(param_1 + 0x71) * 4);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_08006E08(param_1 + 0x74,&DAT_0833ab54);
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


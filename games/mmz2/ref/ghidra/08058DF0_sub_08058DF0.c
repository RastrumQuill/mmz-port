// sub_08058DF0 at 0x08058DF0 (thumb)

undefined4 sub_08058DF0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar1 = (byte *)(param_1 + 0xb5);
    if (*pbVar1 == 0) {
      sub_08006E08(param_1 + 0x74,&DAT_0833c858);
    }
    else {
      sub_08006E08(param_1 + 0x74,&DAT_0833c8b8);
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cbdc + (uint)*pbVar1 * 2));
    *(int *)(param_1 + 0x5c) = (int)*(short *)(&DAT_0833cbe2 + (uint)*pbVar1 * 2);
    *(undefined4 *)(param_1 + 0x60) = 0x500;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + -0x30;
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if ((*(int *)(param_1 + 0xd0) + -8) - iVar2 < 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


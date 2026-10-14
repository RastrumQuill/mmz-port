// sub_08049380 at 0x08049380 (thumb)

undefined4 sub_08049380(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa522);
    sub_08006E08(param_1 + 0x74,&DAT_0833ae8c);
    uVar2 = sub_080A2FCC(param_1,0,0,0);
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = -0xb00;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = 0xb00;
  }
  *(int *)(param_1 + 100) = iVar3 + iVar4;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x1c00;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x26;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


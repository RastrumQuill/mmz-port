// sub_08089D74 at 0x08089D74 (thumb)

undefined4 sub_08089D74(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x400;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar4 < iVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + 0x1000;
  }
  iVar4 = iVar4 - *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xbc) + (iVar4 >> 1);
  iVar2 = (iVar4 >> 0xc) + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  sub_08006E08(param_1 + 0x74,&DAT_08341aa0 + iVar2 * 0x30);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar3 * 2 >> 0x11,0x18);
    *(char *)(param_1 + 0x12) = cVar1 + '\x10';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0x740d);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}


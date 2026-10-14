// sub_08033864 at 0x08033864 (thumb)

undefined4 sub_08033864(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0xe00);
    *(undefined *)(param_1 + 0x146) = 0;
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    if ((*pcVar3 == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_0803C490(param_1,0);
      *pcVar3 = *pcVar3 + '\x01';
    }
    if (1 < *(byte *)(param_1 + 0x102)) {
      *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 2;
    }
    cVar1 = sub_08039FE4(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    sub_0803A3BC(param_1,0xe00);
  }
  if ((((*(char *)(param_1 + 199) == '\x01') && ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0)) ||
      (*(char *)(param_1 + 0x71) < '\x04')) || (*(char *)(param_1 + 0x146) == '\0')) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x100) = 0;
      uVar2 = sub_0802B7C0(param_1);
      sub_0801CF00(param_1,uVar2);
    }
  }
  else {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08033980(param_1);
  }
  return in_lr;
}


// sub_080B6A58 at 0x080B6A58 (thumb)

undefined4 sub_080B6A58(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088608ec);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xb500);
    *(undefined4 *)(param_1 + 0xb4) = 0x5a;
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x71);
  sub_0801CFF0(param_1);
  cVar3 = *(char *)(param_1 + 0x71);
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (cVar3 < '\a') {
      if (cVar3 != cVar2) {
        pbVar4 = (byte *)(param_1 + 0xbd);
        bVar1 = *pbVar4;
        *pbVar4 = bVar1 + 1;
        if (8 < (byte)(bVar1 + 1)) {
          *pbVar4 = 8;
        }
      }
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08860904);
      *(undefined *)(param_1 + 0x13) = 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar5;
  if (iVar5 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


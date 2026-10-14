// sub_0803BE7C at 0x0803BE7C (thumb)

undefined4 sub_0803BE7C(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = sub_0803C210(param_1);
  if (cVar2 == '\x02') {
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    cVar3 = sub_0803C42C(param_1);
    if (cVar3 != '\0') {
      sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08002B10(0x2b);
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    puVar4 = (undefined4 *)(param_1 + 0xb4);
    sub_0804BCC4(*puVar4,param_1,0,0);
    sub_0804BCC4(*puVar4,param_1,0,0x2a);
    sub_0804BCC4(*puVar4,param_1,0,0x55);
    sub_0804BCC4(*puVar4,param_1,0,0x80);
    sub_0804BCC4(*puVar4,param_1,0,0xaa);
    sub_0804BCC4(*puVar4,param_1,0,0xd5);
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[bVar1] + 8);
  return in_lr;
}


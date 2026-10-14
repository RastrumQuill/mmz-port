// sub_0804750C at 0x0804750C (thumb)

undefined4 sub_0804750C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x10;
    pbVar3 = (byte *)(param_1 + 0xbe);
    bVar1 = *pbVar3;
    do {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      bVar2 = sub_080EF330(uVar4 * 2 >> 0x11,6);
      *pbVar3 = bVar2;
    } while (bVar1 == bVar2);
    uVar5 = sub_0809E5C4(param_1,0,((uint)*pbVar3 << 0x1a) >> 0x18);
    *(undefined4 *)(param_1 + 0xcc) = uVar5;
    sub_0809E5C4(param_1,0,*pbVar3 * '\x04' + '\x01');
    sub_0809E5C4(param_1,0,*pbVar3 * '\x04' + '\x02');
    sub_0809E5C4(param_1,0,*pbVar3 * '\x04' + '\x03');
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0xcc) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


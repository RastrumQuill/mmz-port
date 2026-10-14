// sub_0805640C at 0x0805640C (thumb)

undefined4 sub_0805640C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080032EC(0x51);
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar3 = bVar1 & 1;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa62a);
    sub_08006E08(param_1 + 0x74,&DAT_0833c2e8);
    piVar6 = (int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = *piVar6;
    iVar4 = param_1 + 0x54;
    sub_08015518(8,iVar4);
    cVar2 = sub_08057A70(param_1);
    local_28 = iVar4;
    local_24 = piVar6;
    if (cVar2 != '\0') {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      cVar2 = sub_080EF330(uVar3 * 2 >> 0x11,3);
      cVar2 = cVar2 + '\x06';
      if (cVar2 != '\0') {
        do {
          uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
          uVar5 = uVar3 & 0x7fffffff;
          DAT_0202e188 = uVar5;
          iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,0xb0);
          local_30 = *(int *)(param_1 + 0xb8) + (iVar4 + 0x20) * 0x100;
          uVar3 = uVar5 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar3 & 0x7fffffff;
          iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,0xf);
          local_2c = *local_24 + iVar4 * 0x100 + -0x8000;
          sub_080B61B4(param_1,&local_30,1,0);
          cVar2 = cVar2 + -1;
        } while (cVar2 != '\0');
      }
    }
    local_30 = *(int *)(param_1 + 0x58) + 0x1000;
    uVar3 = 0;
    do {
      sub_080B61B4(param_1,local_28,0,(uVar3 << 0x1d) >> 0x18);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


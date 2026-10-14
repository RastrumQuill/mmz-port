// sub_0806DB14 at 0x0806DB14 (thumb)

undefined4 sub_0806DB14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x1707);
    sub_080B9528(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x200;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return in_lr;
    }
  }
  iVar2 = param_1 + 0x54;
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B5F14(iVar2,&DAT_08362f20,0,bVar3);
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B5F14(iVar2,&DAT_08362f3c,0,bVar3);
  sub_080B2484(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080B2484(2,iVar2);
  }
  else {
    sub_080B2484(2,iVar2);
  }
  sub_08024FE4(4,iVar2);
  sub_0800471C(0x2a);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,iVar2);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


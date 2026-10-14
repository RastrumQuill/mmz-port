// sub_0806DC44 at 0x0806DC44 (thumb)

undefined4 sub_0806DC44(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x1708);
    sub_080B9528(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    iVar3 = param_1 + 0x54;
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(iVar3,&DAT_08362f20,0,bVar2);
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(iVar3,&DAT_08362f3c,0,bVar2);
    sub_080B2484(1,iVar3);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_080B2484(2,iVar3);
    }
    else {
      sub_080B2484(2,iVar3);
    }
    sub_08024FE4(4,iVar3);
    sub_0800471C(0x2a);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


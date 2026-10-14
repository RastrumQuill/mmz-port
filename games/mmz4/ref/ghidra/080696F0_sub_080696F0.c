// sub_080696F0 at 0x080696F0 (thumb)

undefined4 sub_080696F0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    sub_0801CF00(uVar3,0x5700);
    sub_0801CF00(uVar4,0x5701);
    sub_0801CF00(uVar2,0x5705);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(uVar3);
  sub_0801CFF0(uVar4);
  sub_0801CFF0(uVar2);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(byte *)(param_1 + 0xd) = bVar1;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  return in_lr;
}


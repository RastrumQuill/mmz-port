// sub_0806CF10 at 0x0806CF10 (thumb)

undefined4 sub_0806CF10(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08017700(param_1,0x1700);
  sub_080177F4(param_1);
  if (((DAT_02002446 & 1) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar1 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0x14;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362e70,param_1 + 0x54,uVar2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = 0x806dd59;
  uVar2 = sub_0806CD94(param_1,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xd) = 2;
  return in_lr;
}


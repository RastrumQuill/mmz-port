// sub_080780D8 at 0x080780D8 (thumb)

undefined4 sub_080780D8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  sub_080127D0(param_1);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  sub_080127E4(param_1,0xa608);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080796B0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833fe00,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(iVar3 + 0x58) + -0x400;
  sub_080A2C9C(param_1,&local_1c,0,6);
  sub_080A2C9C(param_1,&local_1c,0,5);
  sub_08078018(param_1,&local_1c,0,4);
  sub_080A2C9C(param_1,&local_1c,0,3);
  sub_080A2C9C(param_1,&local_1c,0,2);
  sub_080A2C9C(param_1,&local_1c,0,1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
  sub_080032EC(0x94);
  return in_lr;
}


// sub_0803788C at 0x0803788C (thumb)

undefined4 sub_0803788C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5303);
  sub_0800471C(0x1a);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffa00;
  }
  else {
    uVar3 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b72c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar1 = sub_08034668(uVar2);
  sub_080073A0(param_1 + 0x74,&DAT_0835b72c,cVar1 + '\x06',2,2,0xffffffff);
  return in_lr;
}


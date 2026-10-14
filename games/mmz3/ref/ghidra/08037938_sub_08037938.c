// sub_08037938 at 0x08037938 (thumb)

undefined4 sub_08037938(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5200);
  sub_0800471C(0x1a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b75c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  cVar1 = sub_08034668(uVar2);
  sub_080073A0(param_1 + 0x74,&DAT_0835b75c,cVar1 + '\n',3,0xffffffff,0xffffffff);
  return in_lr;
}


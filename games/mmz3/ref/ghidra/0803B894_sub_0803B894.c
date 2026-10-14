// sub_0803B894 at 0x0803B894 (thumb)

undefined4 sub_0803B894(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835dda0 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835dd74,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar1 = sub_08034668(uVar2);
  sub_080073A0(param_1 + 0x74,&DAT_0835dd74,cVar1 + '\x02',2,2,(*(byte *)(iVar3 + 0x13) >> 2) + 2);
  *(undefined4 *)(param_1 + 0x98) = 0x803b9b1;
  sub_0803B95C(param_1);
  return in_lr;
}


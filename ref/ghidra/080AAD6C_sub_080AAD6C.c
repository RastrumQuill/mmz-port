// sub_080AAD6C at 0x080AAD6C (thumb)

undefined4 sub_080AAD6C(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,4);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080AAC78(param_1,2);
  iVar3 = DAT_0202286c;
  iVar2 = *(int *)(DAT_0202286c + 0x4c) + -0x14000;
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar3 = sub_08008360(iVar2,*(undefined4 *)(iVar3 + 0x50));
  *(int *)(param_1 + 0x50) = iVar3 + -0x8000;
  *(undefined2 *)(param_1 + 0xca) = 0xffff;
  uVar1 = sub_08001EAC(200);
  *(undefined2 *)(param_1 + 0xca) = uVar1;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080AACEC(param_1);
  return in_lr;
}


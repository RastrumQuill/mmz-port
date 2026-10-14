// sub_0803BB60 at 0x0803BB60 (thumb)

undefined4 sub_0803BB60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5202);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = -0xd00;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = 0xd00;
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar4;
  iVar3 = *(int *)(&DAT_0835ddec + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(int *)(param_1 + 0x60) = iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *(int *)(param_1 + 0x68) = -(iVar3 >> 3);
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835dda8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar1 = sub_08034668(uVar2);
  sub_080073A0(param_1 + 0x74,&DAT_0835dda8,cVar1 + '\x04',0xffffffff,0xffffffff,
               *(byte *)(param_1 + 0x10) + 2);
  *(undefined4 *)(param_1 + 0x98) = 0x803bfd1;
  sub_0803BC48(param_1);
  return in_lr;
}


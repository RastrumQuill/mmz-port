// sub_080376F8 at 0x080376F8 (thumb)

undefined4 sub_080376F8(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar5 < 1) goto LAB_08037744;
    }
    else {
      iVar5 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (-1 < iVar5) goto LAB_08037744;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  }
LAB_08037744:
  *(undefined *)(param_1 + 0x12) = 0;
  sub_08017654(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5004);
  sub_0800471C(0x12);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x500;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffff900;
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 10) & 0x10;
    if ((*(uint *)(iVar4 + 0x218) & 0x40) == 0) {
      uVar1 = 0xe0;
    }
    else {
      uVar1 = 0x20;
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x500;
    *(undefined4 *)(param_1 + 0x5c) = 0x700;
    *(undefined *)(param_1 + 0x24) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
    if ((*(uint *)(iVar4 + 0x218) & 0x40) == 0) {
      uVar1 = 0xa0;
    }
    else {
      uVar1 = 0x60;
    }
  }
  *(undefined *)(iVar4 + 0x28a) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0835b6fc,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  cVar2 = sub_08034668(iVar4);
  sub_080073A0(param_1 + 0x74,&DAT_0835b6fc,cVar2 + '\n',0xffffffff,0xffffffff,0xffffffff);
  sub_0803AF64(iVar4,param_1,0);
  return in_lr;
}


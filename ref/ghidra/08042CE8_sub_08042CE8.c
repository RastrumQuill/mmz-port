// sub_08042CE8 at 0x08042CE8 (thumb)

/* WARNING: Removing unreachable block (ram,0x08042d3e) */

ulonglong sub_08042CE8(int param_1,uint param_2,undefined param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0xb8 + ((param_2 & 0xff) + 2) * 4);
  sub_0804283C(param_1,param_2 & 0xff,param_3,&local_10);
  iVar2 = *(int *)(iVar3 + 0x4c) - local_10 >> 8;
  iVar3 = *(int *)(iVar3 + 0x50) - local_c >> 8;
  uVar1 = sub_080C88FC(iVar2 * iVar2 + iVar3 * iVar3);
  uVar1 = uVar1 & 0xffff;
  if (8 < (int)(uVar1 + ((int)uVar1 >> 4) * -0x10)) {
    uVar1 = uVar1 + 0x10;
  }
  return CONCAT44(in_lr,(int)uVar1 >> 4) & 0xffffffff000000ff;
}


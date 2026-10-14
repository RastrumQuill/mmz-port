// sub_0807AB4C at 0x0807AB4C (thumb)

undefined4 sub_0807AB4C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((DAT_0202ec44 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0xb4);
      if (iVar2 == 0) {
        iVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        if (iVar2 != 0) {
          return in_lr;
        }
        bVar1 = sub_08065AEC(param_1,0x4d);
        if (*(byte *)(param_1 + 0x10) < bVar1) {
          return in_lr;
        }
        local_14 = *(int *)(param_1 + 0x54) + 0x800;
        local_10 = *(int *)(param_1 + 0x58) + 0x800;
        sub_0809159C(param_1,&local_14,1,*(undefined *)(param_1 + 0x11));
        iVar2 = 0xf0;
      }
      else {
        iVar2 = iVar2 + -1;
      }
      *(int *)(param_1 + 0xb4) = iVar2;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


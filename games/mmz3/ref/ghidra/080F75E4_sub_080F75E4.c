// sub_080F75E4 at 0x080F75E4 (thumb)

undefined4 sub_080F75E4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x64ac);
  *(undefined *)(param_1 + 0xdf4) = 0;
  *(undefined *)(param_1 + 0xdf5) = 0;
  sub_0800393C(&DAT_08547424,(DAT_020023c6 & 0xc) << 0xc);
  sub_08003E14(&DAT_08547430,0);
  sub_080FE110(&DAT_08524bc0,param_1 + 0x16d8,0x1e0);
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  sub_080040A8(0x3e,0);
  sub_080040A8(0x3f,0);
  iVar1 = sub_080E5F40(param_1,1,0);
  *(int *)(param_1 + 0xdf0) = iVar1;
  *(undefined2 *)(iVar1 + 0x74) = 0x11c;
  *(undefined2 *)(*(int *)(param_1 + 0xdf0) + 0x76) = 0x28;
  sub_0800393C(&DAT_085d7e5c,(DAT_0202fa9a - 0x360) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7e68,(DAT_0202f89a - 10) * 0x20 + 0x200);
  uVar2 = 0;
  do {
    if ((int)((uint)*(ushort *)(iVar3 + 200) & 1 << uVar2) >> uVar2 != 0) {
      sub_080E6C0C(param_1,uVar2);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xc);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}


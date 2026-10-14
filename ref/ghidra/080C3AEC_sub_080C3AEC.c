// sub_080C3AEC at 0x080C3AEC (thumb)

undefined8 sub_080C3AEC(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0 < param_2 * 0x1000000) {
    sub_080BC0AC(&DAT_082ba79c,1,0x12);
    uVar1 = DAT_02004ca8;
    if ((DAT_02004ca8 & 3) != 0) {
      *(undefined *)(param_1 + 1) = 0;
      if ((uVar1 & 2) == 0) {
        DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x40;
        sub_08001EAC(0x2a);
        uVar2 = 0xffffffff;
        goto LAB_080c3b5c;
      }
      sub_08001EAC(0x28);
    }
  }
  uVar2 = 1;
LAB_080c3b5c:
  return CONCAT44(in_lr,uVar2);
}


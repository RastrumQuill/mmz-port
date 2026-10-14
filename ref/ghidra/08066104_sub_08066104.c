// sub_08066104 at 0x08066104 (thumb)

undefined4 sub_08066104(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0x800;
      sub_0808827C(1,&local_14);
      sub_0807D8E8(param_1,0);
      sub_0807D8E8(param_1,1);
      sub_0807D8E8(param_1,1);
      sub_08015698(1,param_1 + 0x4c);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,param_1 + 0x4c);
    }
    else {
      *(undefined *)(param_1 + 0xc1) = 1;
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50) + -0x1800;
      sub_0808827C(2,&local_14);
      sub_0807D8E8(param_1,2);
      sub_0807D8E8(param_1,3);
      sub_08015698(0,param_1 + 0x4c);
    }
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}


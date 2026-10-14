// sub_08036758 at 0x08036758 (thumb)

undefined4 sub_08036758(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
    DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
  }
  sub_08001EE8((int)*(short *)(param_1 + 0xcc));
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(bool *)(param_1 + 200) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  sub_08029778(param_1,0xb);
  sub_080297C0(param_1);
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(*(int *)(param_1 + 0x24) + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}


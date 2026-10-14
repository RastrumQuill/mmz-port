// sub_08068360 at 0x08068360 (thumb)

undefined4 sub_08068360(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x40) == 0) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0c4c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(*(int *)(param_1 + 0x20) + 0xbc) = 0x1f;
      sub_08068400(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


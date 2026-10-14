// sub_0809DF88 at 0x0809DF88 (thumb)

undefined4 sub_0809DF88(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    sub_08001EAC(0x13);
    if (DAT_02022b27 + -2 < 3) {
      DAT_02022b27 = '\x02';
    }
    else {
      DAT_02022b27 = DAT_02022b27 + -2;
    }
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5474 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


// sub_0807D5CC at 0x0807D5CC (thumb)

undefined4 sub_0807D5CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807D41C();
  if (cVar1 == '\0') {
    sub_0807D508(param_1);
    cVar1 = sub_0807D478(param_1);
    if (cVar1 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364460 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836447c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}


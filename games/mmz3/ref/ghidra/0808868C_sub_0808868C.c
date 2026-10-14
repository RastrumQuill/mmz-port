// sub_0808868C at 0x0808868C (thumb)

undefined8 sub_0808868C(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08364fc0);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      bVar2 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar2 == 0x10) {
        sub_08007390(param_1 + 0x74,&DAT_08364fa8);
      }
      else if (bVar2 == 0x30) {
        sub_08007390(param_1 + 0x74,&DAT_08364fa8);
      }
    }
  }
  return CONCAT44(in_lr,1);
}


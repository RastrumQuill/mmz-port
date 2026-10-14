// sub_0808C218 at 0x0808C218 (thumb)

undefined4 sub_0808C218(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = DAT_02030108 & 2;
  if ((DAT_02030108 & 2) == 0) {
    if ((*(char *)(param_1 + 0x10) != '\x01') || ((DAT_02030108 & 0x40) == 0)) {
      cVar2 = sub_0808BFC4(param_1);
      if (cVar2 != '\0') {
        return in_lr;
      }
      sub_0808C0C0(param_1);
      cVar2 = sub_0808C028(param_1);
      if (cVar2 != '\0') {
        return in_lr;
      }
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083656d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083656f0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 0;
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(uint *)(param_1 + 0x8c) = uVar3;
  *(uint *)(param_1 + 0x90) = uVar3;
  *(char *)(param_1 + 0x94) = (char)uVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}


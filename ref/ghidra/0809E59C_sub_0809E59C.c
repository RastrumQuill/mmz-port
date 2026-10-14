// sub_0809E59C at 0x0809E59C (thumb)

undefined4 sub_0809E59C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 0x4c);
  local_c = *(undefined4 *)(param_1 + 0x50);
  bVar4 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar4;
  if ((bVar4 & 7) == 0) {
    if ((bVar4 & 0x1f) == 0) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xf) * 0x100;
    }
    else {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xf) * -0x100;
    }
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_10 = iVar3 + local_10;
    sub_0808B708(param_1,&local_10);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_0809E780(param_1);
  }
  return in_lr;
}


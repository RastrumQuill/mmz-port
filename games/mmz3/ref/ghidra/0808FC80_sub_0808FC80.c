// sub_0808FC80 at 0x0808FC80 (thumb)

undefined4 sub_0808FC80(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  if ((DAT_02030108 & 0x40) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xe) = 10;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      else if (bVar1 != 10) {
        if (bVar1 != 0xb) {
          return in_lr;
        }
        local_28 = *(undefined4 *)(param_1 + 0x54);
        local_24 = *(undefined4 *)(param_1 + 0x58);
        sub_080B2484(1,&local_28);
        sub_0800471C(0x2a);
        sub_08024FE4(4,param_1 + 0x54);
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 3;
        local_20 = *(undefined4 *)(param_1 + 0x54);
        local_1c = *(int *)(param_1 + 0x58) + -0xc00;
        sub_080C43E0(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x7e1a,uVar3);
        sub_080C43E0(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x7e1b,uVar3);
        sub_080C43E0(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x7e1c,uVar3);
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
        sub_080250C4(param_1,param_1 + 0x54);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
        goto LAB_0808fdc0;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_0808fdc0:
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return in_lr;
}


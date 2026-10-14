// sub_0808966C at 0x0808966C (thumb)

undefined4 sub_0808966C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xf) == '\0') && (iVar3 = sub_08065A24(param_1), iVar3 != 0)) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    puVar6 = (uint *)(param_1 + 0x8c);
    if ((DAT_0202ebbb & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar6 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (1 < *(byte *)(iVar3 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar6 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if ((*puVar6 & 0x200) != 0) {
      *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 0x1400;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 0x20;
      *(undefined *)(iVar3 + 0x4d) = 1;
      *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xdf | 0x20;
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar5 = *(int *)(iVar3 + 0x2c);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x8c) = 0;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      *(undefined *)(iVar3 + 0x10) = 2;
      *(undefined *)(iVar3 + 0xd) = 1;
      sub_0801260C(iVar3);
      sub_080127E4(iVar3,0x7401);
      sub_080128D4(iVar3);
      bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(iVar3 + 0x54);
      if (bVar1) {
        uVar4 = 0x240;
      }
      else {
        uVar4 = 0xfffffdc0;
      }
      *(undefined4 *)(iVar3 + 0x5c) = uVar4;
      if (bVar1) {
        bVar2 = *(byte *)(iVar3 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(iVar3 + 10) & 0xef;
      }
      *(byte *)(iVar3 + 10) = bVar2;
      *(bool *)(iVar3 + 0x4c) = bVar1;
      *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | bVar1 << 4;
    }
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
    sub_080894CC(param_1);
    sub_08089A40(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x04') {
      sub_080128D4(param_1);
      sub_080EF118(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_08341a00 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      sub_080EF118(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_08341a18 + (uint)*(byte *)(param_1 + 0x10) * 4)));
    }
    else if (*(int *)(param_1 + 0x28) == 0) {
      sub_080128D4(param_1);
      sub_080EF118(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_08341a00 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      sub_080EF118(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_08341a18 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        iVar3 = sub_0801E11C(0,param_1,&DAT_08341c94);
        *(int *)(param_1 + 0x28) = iVar3;
        if (iVar3 != 0) {
          sub_08006E08(param_1 + 0x74,&DAT_08341a70);
          *(undefined4 *)(param_1 + 0x60) = 0;
          iVar3 = *(int *)(param_1 + 0x2c);
          if (iVar3 != 0) {
            *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
            *(undefined4 *)(iVar3 + 0x8c) = 0;
            *(undefined4 *)(iVar3 + 0x90) = 0;
            *(undefined *)(iVar3 + 0x94) = 0;
            *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
            *(undefined4 *)(iVar3 + 0xc) = 3;
            *(undefined4 *)(iVar3 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
            *(undefined4 *)(param_1 + 0x2c) = 0;
          }
          *(undefined *)(param_1 + 0x24) = 0;
          sub_080127E4(param_1,0x7401);
          sub_080128D4(param_1);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
          *(undefined *)(param_1 + 0x4d) = 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
          sub_080893B0(param_1);
        }
      }
    }
    else {
      iVar3 = sub_0801E4D8();
      if (iVar3 == 0) {
        iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
        if ((-1 < iVar3) &&
           (iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58)),
           -1 < iVar3)) {
          iVar3 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar3;
          if (0x700 < iVar3) {
            *(undefined4 *)(param_1 + 0x60) = 0x700;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          }
        }
      }
      else {
        sub_08006E08(param_1 + 0x74,&DAT_08341a40);
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined *)(param_1 + 0x10) = 2;
        *(undefined *)(param_1 + 0xd) = 0;
        sub_0808AF48(param_1);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_08341a40);
    }
    iVar3 = sub_08065A24(param_1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


// sub_0808DA9C at 0x0808DA9C (thumb)

undefined4 sub_0808DA9C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x10) >> 1;
  uVar7 = (uint)bVar2;
  if (uVar7 == 0) {
    if (((DAT_0202ebbb & 1) != 0) || ((DAT_0202ebbb & 0x20) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(byte *)(param_1 + 0x94) = bVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xc);
      if (bVar1 == 4) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        return in_lr;
      }
      if (1 < bVar1) {
        sub_080128AC(param_1,0x7601,5,1);
        sub_080128D4(param_1);
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
  }
  else if (((uVar7 == 1) && (*(int *)(param_1 + 0x2c) != 0)) &&
          (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar8 = (uint *)(param_1 + 0x8c);
  if ((*puVar8 & 0x200) == 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar3 = sub_08065A24(param_1);
      if (iVar3 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      if (*(char *)(param_1 + 0xf) == '\0') {
        piVar4 = (int *)(param_1 + 0xc0);
        if (*piVar4 != 0) {
          iVar3 = sub_0801E4D8(*piVar4);
          if (iVar3 != 0) {
            if (*(byte *)(param_1 + 0x10) < 2) {
              sub_08006E08(param_1 + 0x74,&DAT_08341ef8);
            }
            else {
              sub_08006E08(param_1 + 0x74,&DAT_08341f28);
            }
            *piVar4 = 0;
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
            return in_lr;
          }
          iVar3 = *(int *)(param_1 + 0x58);
          if (uVar7 == 0) {
            iVar3 = iVar3 + 0x1000;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x1000,iVar3);
          if (iVar3 < 0) {
            return in_lr;
          }
          iVar3 = *(int *)(param_1 + 0x58);
          if (uVar7 == 0) {
            iVar3 = iVar3 + 0x1000;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x1000,iVar3);
          if (iVar3 < 0) {
            return in_lr;
          }
          if ((uVar7 == 0) && (uVar5 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x7600 < uVar5))
          {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *puVar8 = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(byte *)(param_1 + 0x94) = bVar2;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            *(undefined4 *)(param_1 + 0xc) = 3;
            *(undefined4 *)(param_1 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          }
          iVar3 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar3;
          if (0x700 < iVar3) {
            *(undefined4 *)(param_1 + 0x60) = 0x700;
          }
          iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x58) = iVar3;
          if (uVar7 == 0) {
            iVar3 = iVar3 + 0x1000;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x1000,iVar3);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          }
          iVar3 = *(int *)(param_1 + 0x58);
          if (uVar7 == 0) {
            iVar3 = iVar3 + 0x1000;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x1000,iVar3);
          if (-1 < iVar3) {
            return in_lr;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          return in_lr;
        }
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08341fb8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08341fcc + (uint)*(byte *)(param_1 + 0xd) * 4));
        if ((*puVar8 & 1) == 0) {
          return in_lr;
        }
        iVar3 = sub_0801E11C(0,param_1,&UNK_08342058 + uVar7 * 8);
        *piVar4 = iVar3;
        if (iVar3 == 0) {
          return in_lr;
        }
        if (*(byte *)(param_1 + 0x10) < 2) {
          sub_08006E08(param_1 + 0x74,&DAT_08341f58);
        }
        else {
          sub_08006E08(param_1 + 0x74,&DAT_08341f88);
        }
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x60) = 0;
        if (uVar7 != 0) {
          return in_lr;
        }
        sub_080127E4(param_1,0x7601);
        sub_080128D4(param_1);
        return in_lr;
      }
    }
    if ((uVar7 == 0) && (uVar7 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x7600 < uVar7)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar8 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(byte *)(param_1 + 0x94) = bVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (*(byte *)(param_1 + 0x10) < 2) {
        sub_08006E08(param_1 + 0x74,&DAT_08341ef8);
      }
      else {
        sub_08006E08(param_1 + 0x74,&DAT_08341f28);
      }
    }
    iVar3 = sub_08065A24(param_1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar6 = 0;
    if (1 < *(byte *)(param_1 + 0x10)) {
      uVar6 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar6;
    sub_0808DE64(param_1);
  }
  return in_lr;
}


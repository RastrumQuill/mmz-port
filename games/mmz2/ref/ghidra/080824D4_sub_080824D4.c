// sub_080824D4 at 0x080824D4 (thumb)

undefined4 sub_080824D4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  puVar6 = (uint *)(param_1 + 0x8c);
  uVar3 = *puVar6;
  if ((uVar3 & 0x200) != 0) {
    if ((uVar3 & 0x10000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar4 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080826E0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (((DAT_0202ebbb & 1) != 0) || ((DAT_0202ebbb & 0x20) != 0)) {
LAB_08082570:
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
    iVar2 = sub_08065A24(param_1);
    iVar5 = DAT_0202d004;
    if (iVar2 != 0) goto LAB_08082638;
    if ((*(int *)(param_1 + 0x28) == 0) || (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)))
    goto LAB_08082570;
    if (DAT_0202d004 < *(int *)(DAT_0202e130 + 0x58)) {
      if (*(char *)(param_1 + 0xd) == '\x01') {
        *(undefined *)(param_1 + 0xd) = 0xe;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0xb8) = DAT_0202d004 + 0x1000;
      if ((*(char *)(param_1 + 0xd) != '\b') && ((*puVar6 & 0x20000) == 0)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar5 - *(int *)(param_1 + 0x68));
      }
      if (*(char *)(param_1 + 0xd) == '\x0e') {
        if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
          *(undefined *)(param_1 + 0xd) = 5;
          *(undefined *)(param_1 + 0xbf) = 9;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 9;
        }
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    *(int *)(param_1 + 0x68) = iVar5;
  }
  else {
    iVar5 = sub_08065A24(param_1);
    if (iVar5 != 0) {
LAB_08082638:
      if (*(int *)(param_1 + 0x2c) == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_08341118);
      return in_lr;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080826ac:
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) goto LAB_080826c0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) {
      cVar1 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x20)) {
        iVar5 = sub_0801E11C(0,param_1,&DAT_083410e0);
        *(int *)(param_1 + 0x2c) = iVar5;
        if (iVar5 == 0) goto LAB_080826c0;
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        sub_0808400C(param_1 + 0x54,0x1c00,10,0xc);
      }
      goto LAB_080826ac;
    }
  }
  iVar5 = sub_0801E4D8(iVar5);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080826c0:
  sub_080EF118(param_1,*(undefined4 *)(&UNK_08341098 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  return in_lr;
}


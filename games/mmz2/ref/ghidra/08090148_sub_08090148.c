// sub_08090148 at 0x08090148 (thumb)

undefined4 sub_08090148(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808FFB4(param_1);
    return in_lr;
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    sub_08006E08(param_1 + 0x74,&DAT_08342250);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return in_lr;
  }
  if (((*(byte *)(param_1 + 0xd) < 5) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
     (*(int *)(param_1 + 0xc0) == 0)) {
    iVar2 = sub_0801E11C(0,param_1,&DAT_08342280);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 != 0) {
      sub_080127E4(param_1,0x7602);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return in_lr;
    }
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\x02') {
      iVar4 = *(int *)(param_1 + 0x54) + 0x300;
      *(int *)(param_1 + 0x54) = iVar4;
      if (iVar4 < *(int *)(param_1 + 0xb4)) break;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      *(undefined *)(param_1 + 0x12) = 0x10;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar4;
      if (*(int *)(param_1 + 0xb4) < iVar4) break;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      *(undefined *)(param_1 + 0x12) = 0x10;
    }
    goto LAB_08090296;
  case 1:
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    goto LAB_08090296;
  case 2:
    iVar4 = *(int *)(param_1 + 0x58) + 0x300;
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0xb8)) break;
    sub_080032EC(0x90);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0x10;
LAB_08090296:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x2400;
    if (*(byte *)(iVar4 + 0xc) < 2) break;
    goto LAB_08090350;
  case 5:
    iVar4 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
    if (iVar4 == 0) {
      iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) < iVar4) {
        iVar4 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar4;
        if (0x700 < iVar4) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      else {
        uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
      }
    }
    else {
      sub_080127E4(param_1,0x7600);
      *(undefined *)(param_1 + 0xd) = 7;
    }
    break;
  case 6:
    sub_080127E4(param_1,0x7602);
    sub_080128D4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x7600);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x58) + -0x300;
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0xb8) + -0x1e000 <= iVar4) break;
LAB_08090350:
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080128D4(param_1);
  return in_lr;
}


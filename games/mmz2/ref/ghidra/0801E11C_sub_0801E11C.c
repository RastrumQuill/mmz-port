// sub_0801E11C at 0x0801E11C (thumb)

undefined8 sub_0801E11C(uint param_1,int param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = 0;
  local_44 = *param_3;
  local_40 = param_3[1];
  local_24 = 0;
  if (DAT_0202e140 == '\0') {
    bVar1 = *(byte *)(param_2 + 0x97) & 0xf0;
    if (bVar1 == 0x10) {
      local_24 = 1;
    }
    else if (bVar1 == 0x20) {
      local_24 = 2;
    }
    else if (bVar1 == 0x30) {
      local_24 = 3;
    }
    if ((&DAT_08333694)[local_24 + (param_1 & 0xff) * 4] != '\0') {
      if ((param_1 & 0xff) < 7) {
        if (local_24 == 1) {
          iVar4 = sub_080AEAC4(param_2,&local_44,0x5a);
        }
        else if (local_24 == 2) {
          local_44 = local_44 + 0x600;
          local_40 = local_40 + -0xc00;
          iVar4 = sub_080AED14(param_2,&local_44,0x5a);
          local_44 = local_44 + -0xe00;
          local_40 = local_40 + 0x600;
          sub_080AED14(param_2,&local_44,0x5a);
          local_44 = local_44 + 0x1000;
          local_40 = local_40 + 0x800;
          sub_080AED14(param_2,&local_44,0x5a);
          local_44 = local_44 + -0xa00;
          local_40 = local_40 + 0x200;
          sub_080AED14(param_2,&local_44,0x5a);
        }
        else if (local_24 == 3) {
          local_44 = local_44 + 0x600;
          local_40 = local_40 + -0xc00;
          iVar4 = sub_080AEFD0(param_2,&local_44,0x5a);
          local_44 = local_44 + -0xe00;
          local_40 = local_40 + 0x600;
          sub_080AEFD0(param_2,&local_44,0x5a);
          local_44 = local_44 + 0x1000;
          local_40 = local_40 + 0x800;
          sub_080AEFD0(param_2,&local_44,0x5a);
          local_44 = local_44 + -0xa00;
          local_40 = local_40 + 0x200;
          sub_080AEFD0(param_2,&local_44,0x5a);
        }
      }
      else if (local_24 == 1) {
        piVar2 = &DAT_08333700;
        iVar3 = 6;
        do {
          local_3c = local_44 + *piVar2;
          local_38 = local_40 + piVar2[1];
          if (iVar4 == 0) {
            iVar4 = sub_080AEAC4(param_2,&local_3c,0x1e);
          }
          else {
            sub_080AEAC4(param_2,&local_3c,0x1e);
          }
          piVar2 = piVar2 + 2;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      else if (local_24 == 2) {
        piVar2 = &DAT_08333738;
        iVar3 = 3;
        do {
          local_34 = local_44 + *piVar2 + 0x600;
          local_30 = local_40 + piVar2[1] + -0xc00;
          if (iVar4 == 0) {
            iVar4 = sub_080AED14(param_2,&local_34,0x1e);
          }
          else {
            sub_080AED14(param_2,&local_34,0x1e);
          }
          local_34 = local_34 + -0xe00;
          local_30 = local_30 + 0x600;
          sub_080AED14(param_2,&local_34,0x1e);
          local_34 = local_34 + 0x1000;
          local_30 = local_30 + 0x800;
          sub_080AED14(param_2,&local_34,0x1e);
          local_34 = local_34 + -0xa00;
          local_30 = local_30 + 0x200;
          sub_080AED14(param_2,&local_34,0x1e);
          piVar2 = piVar2 + 2;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      else if (local_24 == 3) {
        piVar2 = &DAT_08333738;
        iVar3 = 3;
        do {
          local_2c = local_44 + *piVar2 + 0x600;
          local_28 = local_40 + piVar2[1] + -0xc00;
          if (iVar4 == 0) {
            iVar4 = sub_080AEFD0(param_2,&local_2c,0x1e);
          }
          else {
            sub_080AEFD0(param_2,&local_2c,0x1e);
          }
          local_2c = local_2c + -0xe00;
          local_28 = local_28 + 0x600;
          sub_080AEFD0(param_2,&local_2c,0x1e);
          local_2c = local_2c + 0x1000;
          local_28 = local_28 + 0x800;
          sub_080AEFD0(param_2,&local_2c,0x1e);
          local_2c = local_2c + -0xa00;
          local_28 = local_28 + 0x200;
          sub_080AEFD0(param_2,&local_2c,0x1e);
          piVar2 = piVar2 + 2;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      if (iVar4 != 0) {
        if (local_24 == 1) {
          sub_080032EC(0xf6);
        }
        if (local_24 == 2) {
          sub_080032EC(0xf7);
          iVar4 = 0;
        }
        else if (local_24 == 3) {
          sub_080032EC(0x40);
        }
      }
    }
  }
  else {
    iVar4 = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


// sub_0802AD94 at 0x0802AD94 (thumb)

undefined8 sub_0802AD94(uint param_1,int param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  param_1 = param_1 & 0xff;
  local_28 = 0;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_24 = 0;
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
  else if ((*(byte *)(param_2 + 0x97) & 0xf) == 6) {
    local_24 = 4;
  }
  if (local_24 == 4) {
    if (6 < param_1) goto LAB_0802b3bc;
  }
  else if ((&UNK_0884f354)[local_24 + param_1 * 4] == '\0') goto LAB_0802b3bc;
  uVar6 = 0xff;
  if (local_24 == 2) {
    iVar3 = 0;
    piVar2 = &DAT_0202ed54;
    do {
      if (*piVar2 == param_2) goto LAB_0802b3bc;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    uVar4 = 0;
    if (DAT_0202ed54 == 0) {
      uVar6 = 0;
      DAT_0202ed54 = param_2;
    }
    else {
      do {
        uVar4 = uVar4 + 1;
        if (0xb < (int)uVar4) goto LAB_0802ae56;
      } while ((&DAT_0202ed54)[uVar4] != 0);
      (&DAT_0202ed54)[uVar4] = param_2;
      uVar6 = uVar4 & 0xff;
    }
LAB_0802ae56:
    if (uVar6 == 0xff) goto LAB_0802b3bc;
  }
  uVar5 = 0x5a;
  if (param_1 == 0x18) {
    uVar5 = 0x1e;
    param_1 = 1;
  }
  if (param_1 == 0x14) {
    uVar5 = 0x1e;
    param_1 = 2;
  }
  if (param_1 < 7) {
    if (local_24 == 1) {
      local_28 = sub_080D2F3C(param_2,&local_58,uVar5);
    }
    else if (local_24 == 2) {
      local_58 = local_58 + 0x600;
      local_54 = local_54 + -0xc00;
      local_28 = sub_080D3124(param_2,&local_58,uVar5,uVar6);
      local_58 = local_58 + -0xe00;
      local_54 = local_54 + 0x600;
      sub_080D3188(param_2,&local_58,uVar5);
      local_58 = local_58 + 0x1000;
      local_54 = local_54 + 0x800;
      sub_080D3188(param_2,&local_58,uVar5);
      local_58 = local_58 + -0xa00;
      local_54 = local_54 + 0x200;
      sub_080D3188(param_2,&local_58,uVar5);
    }
    else if (local_24 == 3) {
      local_58 = local_58 + 0x600;
      local_54 = local_54 + -0xc00;
      local_28 = sub_080D3418(param_2,&local_58,uVar5);
      local_58 = local_58 + -0xe00;
      local_54 = local_54 + 0x600;
      sub_080D3418(param_2,&local_58,uVar5);
      local_58 = local_58 + 0x1000;
      local_54 = local_54 + 0x800;
      sub_080D3418(param_2,&local_58,uVar5);
      local_58 = local_58 + -0xa00;
      local_54 = local_54 + 0x200;
      sub_080D3418(param_2,&local_58,uVar5);
    }
    else if (local_24 == 4) {
      local_28 = sub_080E55F4(param_2,&local_58,uVar5);
    }
  }
  else if (local_24 == 1) {
    piVar2 = &DAT_0884f3cc;
    iVar3 = 6;
    do {
      local_50 = local_58 + *piVar2;
      local_4c = local_54 + piVar2[1];
      if (local_28 == 0) {
        local_28 = sub_080D2F3C(param_2,&local_50,0x1e);
      }
      else {
        sub_080D2F3C(param_2,&local_50,0x1e);
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  else if (local_24 == 2) {
    if (param_1 == 0xe) {
      local_48 = local_58 + 0x600;
      local_44 = local_54 + -0x1600;
      local_28 = sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + -0xe00;
      local_44 = local_54 + -0x1400;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + -0x1400;
      local_44 = local_54 + -0x400;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + -0x200;
      local_44 = local_54 + -0xc00;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + 0xc00;
      local_44 = local_54 + -0xc00;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + 0xe00;
      local_44 = local_54 + 0x800;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + -0xc00;
      local_44 = local_54 + 0xa00;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
      local_48 = local_58 + -0x200;
      local_44 = local_54;
      sub_080D3124(param_2,&local_48,0x1e,uVar6);
    }
    else {
      piVar2 = &DAT_0884f404;
      iVar3 = 3;
      do {
        local_40 = local_58 + *piVar2 + 0x600;
        local_3c = local_54 + piVar2[1] + -0xc00;
        if (local_28 == 0) {
          local_28 = sub_080D3124(param_2,&local_40,0x1e,uVar6);
        }
        else {
          sub_080D3188(param_2,&local_40,0x1e);
        }
        local_40 = local_40 + -0xe00;
        local_3c = local_3c + 0x600;
        sub_080D3188(param_2,&local_40,0x1e);
        local_40 = local_40 + 0x1000;
        local_3c = local_3c + 0x800;
        sub_080D3188(param_2,&local_40,0x1e);
        local_40 = local_40 + -0xa00;
        local_3c = local_3c + 0x200;
        sub_080D3188(param_2,&local_40,0x1e);
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  else if (local_24 == 3) {
    if (((param_1 == 0x11) && (0x1c < *(byte *)(param_2 + 0xd))) &&
       (*(byte *)(param_2 + 0xd) < 0x20)) {
      local_34 = local_54 + -0x1000;
      local_38 = local_58;
      local_28 = sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + -0x1000;
      local_34 = local_54 + -0x400;
      sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + 0xe00;
      local_34 = local_54;
      sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + 0x400;
      local_34 = local_54 + 0x1000;
      sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + -0x800;
      local_34 = local_54 + 0xe00;
      sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + 0xc00;
      local_34 = local_54 + -0x1800;
      sub_080D3418(param_2,&local_38,0x1e);
      local_38 = local_58 + 0x200;
      local_34 = local_54 + 0x200;
      sub_080D3418(param_2,&local_38,0x1e);
    }
    else {
      piVar2 = &DAT_0884f404;
      iVar3 = 3;
      do {
        local_30 = local_58 + *piVar2 + 0x600;
        local_2c = local_54 + piVar2[1] + -0xc00;
        if (local_28 == 0) {
          local_28 = sub_080D3418(param_2,&local_30,0x1e);
        }
        else {
          sub_080D3418(param_2,&local_30,0x1e);
        }
        local_30 = local_30 + -0xe00;
        local_2c = local_2c + 0x600;
        sub_080D3418(param_2,&local_30,0x1e);
        local_30 = local_30 + 0x1000;
        local_2c = local_2c + 0x800;
        sub_080D3418(param_2,&local_30,0x1e);
        local_30 = local_30 + -0xa00;
        local_2c = local_2c + 0x200;
        sub_080D3418(param_2,&local_30,0x1e);
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  if (local_28 != 0) {
    if (local_24 == 1) {
      sub_08002B10(0x3c);
      *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
    }
    if (local_24 == 2) {
      sub_08002B10(0x3d);
      local_28 = 0;
    }
    else {
      if (local_24 == 3) {
        sub_08002B10(0x40);
        *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
      }
      if (local_24 == 4) {
        *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
      }
    }
  }
LAB_0802b3bc:
  return CONCAT44(in_lr,local_28);
}


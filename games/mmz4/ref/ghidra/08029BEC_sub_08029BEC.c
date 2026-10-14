// sub_08029BEC at 0x08029BEC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_08029BEC(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_lr;
  
  switch(*param_1) {
  case '\0':
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(DAT_0202e8e0 + 1);
    cVar1 = sub_0803AB00();
    if (cVar1 != '\0') {
      *(undefined2 *)(DAT_0202e8e0 + 0xe) = 1;
    }
    if (DAT_0202e910 == 4) {
      if (DAT_0202eb94 < 0xbf4) {
        if (DAT_0202eb94 < 0xac8) {
          if (DAT_0202eb94 < 0x99c) {
            if (DAT_0202eb94 < 0x870) {
              if (DAT_0202eb94 < 0x744) {
                if (DAT_0202eb94 < 0x618) {
                  if (DAT_0202eb94 < 0x4ec) {
                    if (DAT_0202eb94 < 0x3c0) {
                      if (DAT_0202eb94 < 0x294) {
                        if (DAT_0202eb94 < 0x168) {
                          DAT_0202e8e7 = '\0';
                        }
                        else {
                          DAT_0202e8e7 = '\x02';
                        }
                      }
                      else {
                        DAT_0202e8e7 = '\x04';
                      }
                    }
                    else {
                      DAT_0202e8e7 = '\x06';
                    }
                  }
                  else {
                    DAT_0202e8e7 = '\b';
                  }
                }
                else {
                  DAT_0202e8e7 = '\n';
                }
              }
              else {
                DAT_0202e8e7 = '\f';
              }
            }
            else {
              DAT_0202e8e7 = '\x0e';
            }
          }
          else {
            DAT_0202e8e7 = '\x10';
          }
        }
        else {
          DAT_0202e8e7 = '\x12';
        }
      }
      else {
        DAT_0202e8e7 = '\x14';
      }
    }
    else if (DAT_0202e910 == 5) {
      cVar1 = (DAT_0202e8ba & 1) * '\x04';
      if ((DAT_0202e8b9 & 0x80) != 0) {
        cVar1 = cVar1 + '\x04';
      }
      DAT_0202e8e7 = ((byte)((int)-(DAT_0202e8b9 & 0x40) >> 0x1f) & 4) + cVar1;
      if ((DAT_0202e8ba & 2) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x04';
      }
      if ((DAT_0202e8ba & 4) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x04';
      }
    }
    else if (DAT_0202e910 == 7) {
      DAT_0202e8e7 = '\0';
      if ((DAT_0202e8ba & 0x10) != 0) {
        DAT_0202e8e7 = '\x05';
      }
      if ((DAT_0202e8ba & 0x20) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x05';
      }
      if ((DAT_0202e8ba & 0x40) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x05';
      }
      if ((DAT_0202e8ba & 0x80) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x05';
      }
    }
    else if (DAT_0202e910 == 0xb) {
      cVar1 = (DAT_0202e8bb & 1) * '\x02';
      if ((DAT_0202e8bb & 2) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      if ((DAT_0202e8bb & 4) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      if ((DAT_0202e8bb & 8) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      if ((DAT_0202e8bb & 0x10) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      if ((DAT_0202e8bb & 0x20) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      if ((DAT_0202e8bb & 0x40) != 0) {
        cVar1 = cVar1 + '\x02';
      }
      cVar4 = (DAT_0202e8bc & 1) * '\x02';
      if ((DAT_0202e8bb & 0x80) != 0) {
        cVar4 = cVar4 + '\x02';
      }
      DAT_0202e8e7 = cVar1 + cVar4;
      if ((DAT_0202e8bc & 2) != 0) {
        DAT_0202e8e7 = DAT_0202e8e7 + '\x02';
      }
    }
    sub_0801EA34();
    DAT_02000a06 = 0x204;
    _DAT_02000a10 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x1300;
    sub_08001D30(&DAT_08b6c1b8,0x4000);
    sub_08002208(&DAT_08b6c1c4,0);
    sub_08001D30(&DAT_08b6c230,(DAT_02000a06 & 0xc) * 0x1000);
    sub_08002208(&DAT_08b6c23c,0);
    sub_080027B8((DAT_02000a06 & 0x1f00) * 8 + 0x6000000,&DAT_08b2c000,100,0,0);
    sub_0800243C();
    sub_0800249C(0x33,0);
    DAT_02000a50 = DAT_02000a50 & 0xbfff;
    if (DAT_0202ea78 != 0) {
      if (DAT_0202ea78 != 0xffffffff) {
        sub_08002A98(DAT_0202ea78 & 0xffff);
        DAT_0202ea78 = 0xffffffff;
      }
      sub_08002A88(0);
      DAT_0202ea78 = 0;
    }
    DAT_0202ea64 = 9;
    *param_1 = *param_1 + '\x01';
  case '\x01':
    sub_080025D8(0x33);
    if (DAT_0202ea64 == 0) {
      DAT_03002ac0 = 0;
      param_1[1] = '\0';
      goto LAB_08029fc0;
    }
    break;
  case '\x02':
    sub_080025D8(0x33);
    iVar2 = sub_0802A04C(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      *param_1 = *param_1 + '\x02';
    }
    break;
  case '\x03':
    sub_080025D8(0x33);
    param_1[1] = '\0';
    goto LAB_08029fc0;
  case '\x04':
    sub_080025D8(0x33);
    iVar2 = sub_0802A57C(param_1);
    if (iVar2 != 1) {
      param_1[1] = '\0';
      goto LAB_08029fc0;
    }
    break;
  case '\x05':
    sub_080025D8(0x33);
    iVar2 = sub_0802A618(param_1);
    if ((iVar2 != 1) && ((DAT_02000764 & 0xb) != 0)) {
      param_1[1] = '\0';
      goto LAB_08029fc0;
    }
    break;
  case '\x06':
    sub_080025D8(0x33);
    if (DAT_0202ea78 != 0xffffffff) {
      sub_08002A98(DAT_0202ea78 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    DAT_0202ea64 = 10;
LAB_08029fc0:
    *param_1 = *param_1 + '\x01';
    break;
  case '\a':
    sub_080025D8(0x33);
    if (DAT_0202ea64 == 0) {
      DAT_02000a00 = DAT_02000a00 & 0xedff;
      sub_08002624(0x33);
      sub_08002464();
      *(undefined2 *)(param_1 + 4) = 0x3c;
      *param_1 = *param_1 + '\x01';
      goto switchD_08029c02_caseD_8;
    }
    break;
  case '\b':
switchD_08029c02_caseD_8:
    if (*(short *)(param_1 + 4) == 0) {
      sub_080382F0(DAT_020359b8,&DAT_02035958);
      sub_0802AA84();
      uVar3 = 0;
      goto LAB_0802a042;
    }
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  }
  sub_0802AA84();
  uVar3 = 1;
LAB_0802a042:
  return CONCAT44(in_lr,uVar3);
}


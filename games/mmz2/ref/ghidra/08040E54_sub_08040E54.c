// sub_08040E54 at 0x08040E54 (thumb)

undefined4 sub_08040E54(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa202);
    sub_080032EC(0x48);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0x71) != '\x02') goto switchD_08040e86_caseD_5;
    puVar2 = &DAT_0833a2e0;
    break;
  case 1:
    if (*(char *)(param_1 + 0x71) != '\x03') goto switchD_08040e86_caseD_5;
    puVar2 = &DAT_0833a328;
    break;
  case 2:
    if (*(char *)(param_1 + 0x71) != '\x04') goto switchD_08040e86_caseD_5;
    puVar2 = &DAT_0833a388;
    break;
  case 3:
    if (*(char *)(param_1 + 0x71) != '\x06') goto switchD_08040e86_caseD_5;
    puVar2 = &DAT_0833a3d0;
    break;
  case 4:
    if (*(char *)(param_1 + 0x71) != '\a') goto switchD_08040e86_caseD_5;
    puVar2 = &DAT_0833a2b0;
    break;
  default:
    goto switchD_08040e86_caseD_5;
  }
  sub_08006E08(param_1 + 0x74,puVar2);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08040e86_caseD_5:
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(byte *)(param_1 + 0xbd) < 6) {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xe;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

